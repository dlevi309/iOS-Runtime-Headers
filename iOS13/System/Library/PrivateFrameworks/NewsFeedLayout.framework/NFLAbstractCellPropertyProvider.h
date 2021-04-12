/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)plistProvider;
+(id)publisherTitleFontLarge;
+(id)publisherTitleFontSmall;
-(id)init;
-(void)dealloc;
-(double)scaleValue;
-(NSString *)plistName;
-(void)setPlistName:(NSString *)arg1 ;
-(Class)propertyClass;
-(void)_loadIfNeeded;
-(NFUnfairLock *)propertiesLock;
-(void)setPropertiesByColumnSpanSize:(unsigned long long)arg1 ;
-(NFLFontCache *)fontCache;
-(id)initWithScaleValue:(double)arg1 preferredContentSizeCategory:(id)arg2 fontCache:(id)arg3 plistName:(id)arg4 propertyClass:(Class)arg5 ;
-(id)propertiesForColumnSpan:(long long)arg1 ;
-(void)setPropertyClass:(Class)arg1 ;
-(unsigned long long)propertiesByColumnSpanSize;
-(void)setPropertiesLock:(NFUnfairLock *)arg1 ;
@end

