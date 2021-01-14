/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray, NSMutableDictionary, NSString;

@interface OADTableStyleCollection : NSObject {

	NSMutableArray* _styles;
	NSMutableDictionary* _styleMap;
	NSString* _defaultTableStyleId;

}

@property (nonatomic,copy) NSString * defaultTableStyleId;              //@synthesize defaultTableStyleId=_defaultTableStyleId - In the implementation block
-(id)init;
-(void)addTableStyle:(id)arg1 ;
-(id)tableStyles;
-(id)tableStyleWithId:(id)arg1 ;
-(NSString *)defaultTableStyleId;
-(void)setDefaultTableStyleId:(NSString *)arg1 ;
@end

