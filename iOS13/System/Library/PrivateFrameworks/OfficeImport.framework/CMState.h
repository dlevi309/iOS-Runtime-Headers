/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OCDDocument, NSMutableDictionary, NSString, OADColorMap, OADColorScheme;

@interface CMState : NSObject {

	OCDDocument* _document;
	NSMutableDictionary* components;
	NSMutableDictionary* htmlResource;
	NSString* mResourceUrlPrefix;
	OADColorMap* mColorMap;
	OADColorScheme* mColorScheme;
	id mResources;
	unsigned long long mSourceFormat;
	BOOL mIsThumbnail;
	BOOL mIsOnPhone;
	long long _textLevel;

}

@property (retain) OADColorMap * colorMap; 
@property (retain) OADColorScheme * colorScheme; 
@property (retain) id resources; 
@property (retain) OCDDocument * document;                       //@synthesize document=_document - In the implementation block
@property (assign) unsigned long long sourceFormat; 
@property (assign) BOOL isThumbnail; 
@property (assign) BOOL isOnPhone; 
-(id)init;
-(void)setDocument:(OCDDocument *)arg1 ;
-(OCDDocument *)document;
-(id)resources;
-(void)setResources:(id)arg1 ;
-(OADColorMap *)colorMap;
-(void)setColorMap:(OADColorMap *)arg1 ;
-(unsigned long long)sourceFormat;
-(BOOL)isThumbnail;
-(OADColorScheme *)colorScheme;
-(void)setColorScheme:(OADColorScheme *)arg1 ;
-(BOOL)isOnPhone;
-(long long)textLevel;
-(void)pushTextLevel;
-(void)popTextLevel;
-(void)setIsOnPhone:(BOOL)arg1 ;
-(void)setIsThumbnail:(BOOL)arg1 ;
-(void)copyFromCMStateWithoutComponents:(id)arg1 ;
-(id)getHtmlResource;
-(void)setHtmlResource:(id)arg1 ;
-(id)resourceUrlPrefix;
-(id)componentByName:(id)arg1 ;
-(void)setComponentWithName:(id)arg1 value:(id)arg2 ;
-(void)setResourceUrlPrefix:(id)arg1 ;
-(BOOL)isOffice12;
-(void)setSourceFormat:(unsigned long long)arg1 ;
@end

