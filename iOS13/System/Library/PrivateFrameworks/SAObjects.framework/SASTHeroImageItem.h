/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(NSString *)position;
-(void)setPosition:(NSString *)arg1 ;
-(SADecoratedString *)caption;
-(void)setCaption:(SADecoratedString *)arg1 ;
-(id)encodedClassName;
-(SAUINanoImageResource *)watchImageResource;
-(void)setWatchImageResource:(SAUINanoImageResource *)arg1 ;
@end

