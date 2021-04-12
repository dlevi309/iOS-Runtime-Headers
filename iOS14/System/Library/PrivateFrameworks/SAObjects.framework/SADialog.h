/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SADialogText, SADialogConfiguration, NSString;

@interface SADialog : SABaseAceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL canUseServerTTS; 
@property (nonatomic,retain) SADialogText * caption; 
@property (nonatomic,retain) SADialogConfiguration * configuration; 
@property (nonatomic,retain) SADialogText * content; 
@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (assign,nonatomic) BOOL printedOnly; 
@property (assign,nonatomic) BOOL spokenOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(SADialogText *)caption;
-(void)setCaption:(SADialogText *)arg1 ;
-(id)groupIdentifier;
-(SADialogText *)content;
-(void)setContent:(SADialogText *)arg1 ;
-(id)encodedClassName;
-(BOOL)printedOnly;
-(void)setPrintedOnly:(BOOL)arg1 ;
-(BOOL)canUseServerTTS;
-(SADialogConfiguration *)configuration;
-(BOOL)spokenOnly;
-(void)setSpokenOnly:(BOOL)arg1 ;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(void)setCanUseServerTTS:(BOOL)arg1 ;
-(NSString *)dialogIdentifier;
-(void)setConfiguration:(SADialogConfiguration *)arg1 ;
@end

