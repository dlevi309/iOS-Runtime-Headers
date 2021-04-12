/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSArray *)categories;
-(void)setCategories:(NSArray *)arg1 ;
-(unsigned long long)totalSize;
-(void)setTotalSize:(unsigned long long)arg1 ;
-(void)setPurgeable:(BOOL)arg1 ;
-(BOOL)isPurgeable;
@end

