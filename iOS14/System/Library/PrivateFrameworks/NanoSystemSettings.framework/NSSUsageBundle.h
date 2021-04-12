/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface NSSUsageBundle : NSObject <NSSecureCoding> {

	BOOL _purgeable;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSArray* _categories;
	unsigned long long _totalSize;

}

@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * categories;                           //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) unsigned long long totalSize;                   //@synthesize totalSize=_totalSize - In the implementation block
@property (assign,getter=isPurgeable,nonatomic) BOOL purgeable;              //@synthesize purgeable=_purgeable - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCategories:(NSArray *)arg1 ;
-(NSArray *)categories;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)name;
-(void)setPurgeable:(BOOL)arg1 ;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)totalSize;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isPurgeable;
-(void)setTotalSize:(unsigned long long)arg1 ;
@end

