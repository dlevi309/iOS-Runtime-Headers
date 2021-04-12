/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(OADColorMap *)colorMap;
-(void)setColorMap:(OADColorMap *)arg1 ;
-(id)init;
-(id)resources;
-(void)setDocument:(OCDDocument *)arg1 ;
-(BOOL)isThumbnail;
-(void)setResources:(id)arg1 ;
-(OCDDocument *)document;
-(unsigned long long)sourceFormat;
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

