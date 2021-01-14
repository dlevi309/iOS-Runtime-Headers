/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)size;
-(void)setSize:(int)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

