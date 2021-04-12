/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPContainerStateSnapshot.h>

@class NSArray, NSUUID, NSString;

@interface MSPContainerArrayStateSnapshot : NSObject <MSPContainerStateSnapshot> {

	NSArray* _contents;
	NSUUID* _clientIdentifier;

}

@property (nonatomic,retain) NSUUID * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * contents;              //@synthesize contents=_contents - In the implementation block
-(id)init;
-(NSString *)description;
-(NSArray *)contents;
-(void)setClientIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)clientIdentifier;
-(id)initWithContents:(id)arg1 ;
-(id)initWithContents:(id)arg1 clientIdentifier:(id)arg2 ;
@end

