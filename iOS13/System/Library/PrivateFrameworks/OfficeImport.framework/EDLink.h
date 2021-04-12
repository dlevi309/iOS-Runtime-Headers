/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDCollection;

@interface EDLink : NSObject {

	int mType;
	EDCollection* mExternalNames;

}
+(id)linkWithType:(int)arg1 ;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)initWithType:(int)arg1 ;
-(id)externalNames;
@end

