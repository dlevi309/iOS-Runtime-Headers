/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMTag : FATObject {

	NSString* _guid;
	NSString* _name;
	NSString* _parentGuid;
	NSNumber* _updateSequenceNum;

}

@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * parentGuid;                     //@synthesize parentGuid=_parentGuid - In the implementation block
@property (nonatomic,retain) NSNumber * updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
-(NSString *)parentGuid;
-(void)setParentGuid:(NSString *)arg1 ;
@end

