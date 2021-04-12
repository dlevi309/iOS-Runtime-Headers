/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SADecoratedString, NSString, SAUINanoImageResource;

@interface SASTHeroImageItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SADecoratedString * caption; 
@property (nonatomic,copy) NSString * position; 
@property (nonatomic,retain) SAUINanoImageResource * watchImageResource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)heroImageItem;
+(id)heroImageItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)position;
-(SADecoratedString *)caption;
-(void)setCaption:(SADecoratedString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUINanoImageResource *)watchImageResource;
-(void)setWatchImageResource:(SAUINanoImageResource *)arg1 ;
-(void)setPosition:(NSString *)arg1 ;
@end

