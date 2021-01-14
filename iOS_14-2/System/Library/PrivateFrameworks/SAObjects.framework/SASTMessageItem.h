/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSURL, NSString, SAUIDecoratedText;

@interface SASTMessageItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSURL * audioMessageURL; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,retain) SAUIDecoratedText * content; 
@property (nonatomic,retain) SAUIDecoratedText * recipient; 
@property (nonatomic,copy) NSString * serviceType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageItem;
+(id)messageItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setRecipient:(SAUIDecoratedText *)arg1 ;
-(id)groupIdentifier;
-(SAUIDecoratedText *)content;
-(void)setContent:(SAUIDecoratedText *)arg1 ;
-(id)encodedClassName;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(void)setAudioMessageURL:(NSURL *)arg1 ;
-(NSURL *)audioMessageURL;
-(void)setServiceType:(NSString *)arg1 ;
-(SAUIDecoratedText *)recipient;
-(NSString *)serviceType;
@end

