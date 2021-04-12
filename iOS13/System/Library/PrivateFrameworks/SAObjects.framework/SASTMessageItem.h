/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSString, SAUIDecoratedText;

@interface SASTMessageItem : AceObject <SASTTemplateItem>

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
-(id)groupIdentifier;
-(NSString *)serviceType;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(SAUIDecoratedText *)content;
-(void)setContent:(SAUIDecoratedText *)arg1 ;
-(void)setRecipient:(SAUIDecoratedText *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(SAUIDecoratedText *)recipient;
-(id)encodedClassName;
@end

