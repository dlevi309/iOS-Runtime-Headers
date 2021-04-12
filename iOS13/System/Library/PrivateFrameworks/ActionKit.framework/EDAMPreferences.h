/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setPreferences:(NSDictionary *)arg1 ;
-(NSDictionary *)preferences;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
@end

