/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSDictionary;

@interface EDAMPreferences : FATObject {

	NSNumber* _updateSequenceNum;
	NSDictionary* _preferences;

}

@property (nonatomic,retain) NSNumber * updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) NSDictionary * preferences;                //@synthesize preferences=_preferences - In the implementation block
+(id)structName;
+(id)structFields;
-(NSDictionary *)preferences;
-(void)setPreferences:(NSDictionary *)arg1 ;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
@end

