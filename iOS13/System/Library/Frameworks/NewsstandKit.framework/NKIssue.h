/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NKLibrary, NSString, NSDate, NSMutableArray, NSMapTable, NSMutableSet, NSArray, NSURL;

@interface NKIssue : NSObject <NSSecureCoding> {

	NKLibrary* _library;
	NSString* _name;
	NSDate* _date;
	NSString* _directory;
	NSMutableArray* _assets;
	NSMapTable* _assetsByRequest;
	NSMutableSet* _resolvedAssets;
	BOOL _foundContent;
	BOOL _isDecodingValid;

}

@property (copy) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (copy) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
@property (copy) NSString * directory;                                              //@synthesize directory=_directory - In the implementation block
@property (assign,setter=_setLibrary:,nonatomic) NKLibrary * _library; 
@property (copy,readonly) NSArray * downloadingAssets; 
@property (copy,readonly) NSURL * contentURL; 
@property (readonly) long long status; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(void)setName:(NSString *)arg1 ;
-(NSString *)directory;
-(long long)status;
-(NKLibrary *)_library;
-(void)setDate:(NSDate *)arg1 ;
-(NSURL *)contentURL;
-(id)_directory;
-(id)_commonInit;
-(NSArray *)downloadingAssets;
-(void)setDirectory:(NSString *)arg1 ;
-(id)_initWithName:(id)arg1 date:(id)arg2 directory:(id)arg3 ;
-(BOOL)_isDecodingValid;
-(void)_setLibrary:(id)arg1 ;
-(id)addAssetWithRequest:(id)arg1 ;
-(id)_assetsForRequest:(id)arg1 ;
-(void)_markAssetAsResolved:(id)arg1 ;
-(void)_cleanupAsset:(id)arg1 ;
-(void)_assetChanged:(id)arg1 ;
@end

