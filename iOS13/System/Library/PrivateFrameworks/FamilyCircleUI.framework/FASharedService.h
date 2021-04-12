/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/


@class NSString, NSNumber;

@interface FASharedService : NSObject {

	BOOL _isSeparator;
	BOOL _isDefault;
	NSString* _name;
	NSNumber* _order;
	NSString* _displayLabel;
	NSString* _subLabel;
	NSString* _detailLabel;
	NSString* _iconURLString;
	NSString* _iconURLStringx2;
	NSString* _iconURLStringx3;
	NSString* _actionURLString;

}

@property (nonatomic,readonly) BOOL isSeparator;                        //@synthesize isSeparator=_isSeparator - In the implementation block
@property (nonatomic,readonly) BOOL isDefault;                          //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSNumber * order;                        //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) NSString * displayLabel;                 //@synthesize displayLabel=_displayLabel - In the implementation block
@property (nonatomic,readonly) NSString * subLabel;                     //@synthesize subLabel=_subLabel - In the implementation block
@property (nonatomic,readonly) NSString * detailLabel;                  //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) NSString * iconURLString;                //@synthesize iconURLString=_iconURLString - In the implementation block
@property (nonatomic,readonly) NSString * iconURLStringx2;              //@synthesize iconURLStringx2=_iconURLStringx2 - In the implementation block
@property (nonatomic,readonly) NSString * iconURLStringx3;              //@synthesize iconURLStringx3=_iconURLStringx3 - In the implementation block
@property (nonatomic,readonly) NSString * actionURLString;              //@synthesize actionURLString=_actionURLString - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)order;
-(NSString *)actionURLString;
-(BOOL)isDefault;
-(NSString *)subLabel;
-(NSString *)detailLabel;
-(NSString *)displayLabel;
-(NSString *)iconURLString;
-(BOOL)isSeparator;
-(NSString *)iconURLStringx2;
-(NSString *)iconURLStringx3;
-(BOOL)isEqualToSharedService:(id)arg1 ;
@end

