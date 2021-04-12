/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TILexicon.h>

@class NSString;

@interface TIRecentInputs : TILexicon {

	BOOL _needsSync;
	NSString* _filePath;

}

@property (assign,nonatomic) BOOL needsSync;                   //@synthesize needsSync=_needsSync - In the implementation block
@property (nonatomic,retain) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
+(id)recentInputForIdentifier:(id)arg1 ;
+(void)clearRecentInputForIdentifier:(id)arg1 ;
+(void)removeInput:(id)arg1 forSystemIdentifier:(id)arg2 ;
+(void)requestLexiconForRecentInputIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)requestRemovalOfLexiconForRecentInputIdentifier:(id)arg1 ;
+(id)recentInputAtPath:(id)arg1 ;
+(id)_lexiconPathForLocalIdentifier:(id)arg1 ;
+(void)recentInputForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_sanitizeRecentInputString:(id)arg1 ;
+(void)storeInput:(id)arg1 forLocalIdentifier:(id)arg2 ;
+(void)storeInput:(id)arg1 forSystemIdentifier:(id)arg2 atPath:(id)arg3 ;
+(void)storeInput:(id)arg1 forSystemIdentifier:(id)arg2 ;
+(BOOL)identifierIsSystemIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(id)lexiconWithAdditionalEntry:(id)arg1 maximumSize:(long long)arg2 ;
-(id)lexiconByRemovingEntry:(id)arg1 ;
-(void)storeIfNecessary;
-(BOOL)needsSync;
-(void)setNeedsSync:(BOOL)arg1 ;
@end

