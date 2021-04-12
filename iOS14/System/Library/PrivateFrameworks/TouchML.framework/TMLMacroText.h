/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class NSString;

@interface TMLMacroText : NSObject {

	NSString* macroText;
	NSString* basePath;
	NSString* filename;

}

@property (nonatomic,retain) NSString * macroText; 
@property (nonatomic,retain) NSString * basePath; 
@property (nonatomic,retain) NSString * filename; 
+(id)macroTextWithMacroText:(id)arg1 basePath:(id)arg2 filename:(id)arg3 ;
-(NSString *)basePath;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)setBasePath:(NSString *)arg1 ;
-(void)setMacroText:(NSString *)arg1 ;
-(NSString *)macroText;
@end

