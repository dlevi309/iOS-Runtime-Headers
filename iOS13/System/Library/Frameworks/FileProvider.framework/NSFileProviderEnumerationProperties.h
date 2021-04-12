/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPEnumerationSettings.h>

@class NSArray, NSDictionary, NSString;

@interface NSFileProviderEnumerationProperties : FPEnumerationSettings {

	NSArray* _fileTypes;
	NSDictionary* _userInfo;
	NSString* _enumeratingApplicationBundleIdentifier;
	NSString* _enumeratedItemIdentifier;

}

@property (copy) NSArray * fileTypes;                                            //@synthesize fileTypes=_fileTypes - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                              //@synthesize userInfo=_userInfo - In the implementation block
@property (copy) NSString * enumeratingApplicationBundleIdentifier;              //@synthesize enumeratingApplicationBundleIdentifier=_enumeratingApplicationBundleIdentifier - In the implementation block
@property (copy) NSString * enumeratedItemIdentifier;                            //@synthesize enumeratedItemIdentifier=_enumeratedItemIdentifier - In the implementation block
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSArray *)fileTypes;
-(void)setFileTypes:(NSArray *)arg1 ;
-(NSString *)enumeratingApplicationBundleIdentifier;
-(void)setEnumeratingApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)enumeratedItemIdentifier;
-(void)setEnumeratedItemIdentifier:(NSString *)arg1 ;
@end

