/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/


@class NFLFontCache, NSString, NFUnfairLock;

@interface NFLAbstractCellPropertyProvider : NSObject {

	id* _propertiesByColumnSpan;
	double _scaleValue;
	NFLFontCache* _fontCache;
	Class _propertyClass;
	NSString* _plistName;
	unsigned long long _propertiesByColumnSpanSize;
	NFUnfairLock* _propertiesLock;

}

@property (assign,nonatomic) Class propertyClass;                                        //@synthesize propertyClass=_propertyClass - In the implementation block
@property (nonatomic,retain) NSString * plistName;                                       //@synthesize plistName=_plistName - In the implementation block
@property (assign,nonatomic) unsigned long long propertiesByColumnSpanSize;              //@synthesize propertiesByColumnSpanSize=_propertiesByColumnSpanSize - In the implementation block
@property (nonatomic,retain) NFUnfairLock * propertiesLock;                              //@synthesize propertiesLock=_propertiesLock - In the implementation block
@property (nonatomic,readonly) double scaleValue;                                        //@synthesize scaleValue=_scaleValue - In the implementation block
@property (nonatomic,readonly) NFLFontCache * fontCache;                                 //@synthesize fontCache=_fontCache - In the implementation block
+(id)publisherTitleFontLarge;
+(id)publisherTitleFontSmall;
+(id)plistProvider;
-(id)init;
-(NFUnfairLock *)propertiesLock;
-(void)setPlistName:(NSString *)arg1 ;
-(void)setPropertiesLock:(NFUnfairLock *)arg1 ;
-(void)setPropertiesByColumnSpanSize:(unsigned long long)arg1 ;
-(unsigned long long)propertiesByColumnSpanSize;
-(NSString *)plistName;
-(NFLFontCache *)fontCache;
-(void)_loadIfNeeded;
-(void)setPropertyClass:(Class)arg1 ;
-(double)scaleValue;
-(id)propertiesForColumnSpan:(long long)arg1 ;
-(Class)propertyClass;
-(id)initWithScaleValue:(double)arg1 preferredContentSizeCategory:(id)arg2 fontCache:(id)arg3 plistName:(id)arg4 propertyClass:(Class)arg5 ;
-(void)dealloc;
@end

