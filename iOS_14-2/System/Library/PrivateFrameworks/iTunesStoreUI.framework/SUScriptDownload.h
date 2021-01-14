/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ISUDownload, NSNumber, NSString;

@interface SUScriptDownload : SUScriptObject {

	ISUDownload* _download;

}

@property (readonly) NSNumber * adamID; 
@property (readonly) NSString * phase; 
@property (readonly) float progress; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)phaseStringForDownload:(id)arg1 ;
-(float)progress;
-(id)attributeKeys;
-(NSNumber *)adamID;
-(id)_className;
-(NSString *)phase;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(id)initWithISUDownload:(id)arg1 ;
-(id)initWithSSDownload:(id)arg1 ;
@end

