/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSString;

@interface PXPeopleDataSourceSection : NSObject {

	BOOL _disclosed;
	unsigned long long _personFetchType;
	NSString* _disclosedTitle;
	NSString* _unDisclosedTitle;

}

@property (nonatomic,readonly) unsigned long long personFetchType;              //@synthesize personFetchType=_personFetchType - In the implementation block
@property (getter=isDisclosed) BOOL disclosed;                                  //@synthesize disclosed=_disclosed - In the implementation block
@property (nonatomic,copy) NSString * disclosedTitle;                           //@synthesize disclosedTitle=_disclosedTitle - In the implementation block
@property (nonatomic,copy) NSString * unDisclosedTitle;                         //@synthesize unDisclosedTitle=_unDisclosedTitle - In the implementation block
-(void)setDisclosed:(BOOL)arg1 ;
-(id)initWithPersonFetchType:(unsigned long long)arg1 ;
-(NSString *)unDisclosedTitle;
-(NSString *)disclosedTitle;
-(unsigned long long)personFetchType;
-(void)setUnDisclosedTitle:(NSString *)arg1 ;
-(BOOL)isDisclosed;
-(void)setDisclosedTitle:(NSString *)arg1 ;
@end

