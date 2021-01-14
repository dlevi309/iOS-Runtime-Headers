/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(NSArray *)fileTypes;
-(void)setFileTypes:(NSArray *)arg1 ;
-(NSString *)enumeratingApplicationBundleIdentifier;
-(void)setEnumeratingApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)enumeratedItemIdentifier;
-(void)setEnumeratedItemIdentifier:(NSString *)arg1 ;
@end

