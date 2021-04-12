/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)length;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(NSArray *)keyPaths;
-(void)setKeyPaths:(NSArray *)arg1 ;
-(id)evaluateWithValuesByName:(id)arg1 ;
@end

