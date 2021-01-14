/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@class NSString, NSArray;

@interface FPStringFormat : NSObject {

	NSString* _format;
	NSArray* _keyPaths;

}

@property (nonatomic,retain) NSString * format;               //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSArray * keyPaths;              //@synthesize keyPaths=_keyPaths - In the implementation block
@property (readonly) unsigned long long length; 
+(id)formatForPlistObject:(id)arg1 localizationLookup:(id)arg2 ;
+(id)formatForStringFormatDict:(id)arg1 localizationLookup:(id)arg2 ;
-(void)setKeyPaths:(NSArray *)arg1 ;
-(void)setFormat:(NSString *)arg1 ;
-(NSArray *)keyPaths;
-(NSString *)format;
-(unsigned long long)length;
-(id)evaluateWithValuesByName:(id)arg1 ;
@end

