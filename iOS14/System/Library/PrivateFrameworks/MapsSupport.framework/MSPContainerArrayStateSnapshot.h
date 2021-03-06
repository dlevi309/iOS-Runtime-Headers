/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPContainerStateSnapshot.h>

@class NSArray, NSUUID, NSString;

@interface MSPContainerArrayStateSnapshot : NSObject <MSPContainerStateSnapshot> {

	NSArray* _contents;
	NSUUID* _clientIdentifier;

}

@property (nonatomic,retain) NSUUID * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contents;              //@synthesize contents=_contents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)contents;
-(void)setClientIdentifier:(NSUUID *)arg1 ;
-(id)init;
-(NSString *)description;
-(id)initWithContents:(id)arg1 ;
-(NSUUID *)clientIdentifier;
-(id)initWithContents:(id)arg1 clientIdentifier:(id)arg2 ;
@end

