/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIRuntimeConnection.h>

@class NSString;

@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection {

	NSString* runtimeCollectionClassName;
	BOOL addsContentToExistingCollection;

}

@property (copy) NSString * runtimeCollectionClassName; 
@property (assign) BOOL addsContentToExistingCollection; 
-(void)connect;
-(void)encodeWithCoder:(id)arg1 ;
-(void)connectForSimulator;
-(id)description;
-(void)performConnect;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)runtimeCollectionClassName;
-(void)setRuntimeCollectionClassName:(NSString *)arg1 ;
-(BOOL)addsContentToExistingCollection;
-(void)setAddsContentToExistingCollection:(BOOL)arg1 ;
@end

