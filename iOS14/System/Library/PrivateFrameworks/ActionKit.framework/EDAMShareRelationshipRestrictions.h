/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMShareRelationshipRestrictions : FATObject {

	NSNumber* _noSetReadOnly;
	NSNumber* _noSetReadPlusActivity;
	NSNumber* _noSetModify;
	NSNumber* _noSetFullAccess;

}

@property (nonatomic,retain) NSNumber * noSetReadOnly;                      //@synthesize noSetReadOnly=_noSetReadOnly - In the implementation block
@property (nonatomic,retain) NSNumber * noSetReadPlusActivity;              //@synthesize noSetReadPlusActivity=_noSetReadPlusActivity - In the implementation block
@property (nonatomic,retain) NSNumber * noSetModify;                        //@synthesize noSetModify=_noSetModify - In the implementation block
@property (nonatomic,retain) NSNumber * noSetFullAccess;                    //@synthesize noSetFullAccess=_noSetFullAccess - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)noSetReadOnly;
-(void)setNoSetReadOnly:(NSNumber *)arg1 ;
-(NSNumber *)noSetReadPlusActivity;
-(void)setNoSetReadPlusActivity:(NSNumber *)arg1 ;
-(NSNumber *)noSetModify;
-(void)setNoSetModify:(NSNumber *)arg1 ;
-(NSNumber *)noSetFullAccess;
-(void)setNoSetFullAccess:(NSNumber *)arg1 ;
@end

