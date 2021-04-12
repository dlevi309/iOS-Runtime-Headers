/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
*/

#import <InAppMessagesCore/InAppMessagesCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary;

@interface IAMContent : NSObject <NSCopying> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _body;
	NSArray* _images;
	NSArray* _actions;
	NSDictionary* _contentParameters;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                          //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSArray * images;                         //@synthesize images=_images - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                        //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) NSDictionary * contentParameters;              //@synthesize contentParameters=_contentParameters - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
-(NSString *)body;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 images:(id)arg4 actions:(id)arg5 contentParameters:(id)arg6 identifier:(id)arg7 ;
-(NSArray *)actions;
-(NSString *)subtitle;
-(NSDictionary *)contentParameters;
-(NSArray *)images;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(id)initWithICMessageContent:(id)arg1 ;
@end

