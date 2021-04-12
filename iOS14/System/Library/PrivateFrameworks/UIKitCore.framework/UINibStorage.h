/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString, NSBundle, NSData, UINibDecoder;

@interface UINibStorage : NSObject {

	NSString* bundleResourceName;
	NSString* bundleDirectoryName;
	NSBundle* bundle;
	NSString* identifierForStringsFile;
	NSData* archiveData;
	UINibDecoder* nibDecoder;
	BOOL instantiatingForSimulator;
	BOOL captureImplicitLoadingContextOnDecode;

}

@property (nonatomic,copy) NSString * bundleResourceName; 
@property (nonatomic,copy) NSString * bundleDirectoryName; 
@property (nonatomic,retain) NSBundle * bundle; 
@property (nonatomic,copy) NSString * identifierForStringsFile; 
@property (nonatomic,copy) NSData * archiveData; 
@property (nonatomic,retain) UINibDecoder * nibDecoder; 
@property (assign,nonatomic) BOOL instantiatingForSimulator; 
@property (assign) BOOL captureImplicitLoadingContextOnDecode; 
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(void)setCaptureImplicitLoadingContextOnDecode:(BOOL)arg1 ;
-(NSString *)bundleDirectoryName;
-(void)setInstantiatingForSimulator:(BOOL)arg1 ;
-(UINibDecoder *)nibDecoder;
-(void)setIdentifierForStringsFile:(NSString *)arg1 ;
-(NSString *)bundleResourceName;
-(BOOL)instantiatingForSimulator;
-(BOOL)captureImplicitLoadingContextOnDecode;
-(void)setArchiveData:(NSData *)arg1 ;
-(void)setNibDecoder:(UINibDecoder *)arg1 ;
-(NSData *)archiveData;
-(NSString *)identifierForStringsFile;
-(void)setBundleDirectoryName:(NSString *)arg1 ;
-(void)setBundleResourceName:(NSString *)arg1 ;
@end

