/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSString *)basePath;
-(void)setBasePath:(NSString *)arg1 ;
-(void)setMacroText:(NSString *)arg1 ;
-(NSString *)macroText;
@end

