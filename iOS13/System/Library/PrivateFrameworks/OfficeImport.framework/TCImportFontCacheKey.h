/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface TCImportFontCacheKey : NSObject {

	int _size;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int size;                   //@synthesize size=_size - In the implementation block
+(id)createFontCacheKeyForName:(id)arg1 size:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(int)size;
-(void)setSize:(int)arg1 ;
@end

