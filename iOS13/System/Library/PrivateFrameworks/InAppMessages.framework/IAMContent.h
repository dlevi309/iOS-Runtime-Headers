/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/

#import <InAppMessages/InAppMessages-Structs.h>
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(NSArray *)images;
-(NSString *)subtitle;
-(NSArray *)actions;
-(NSString *)body;
-(NSDictionary *)contentParameters;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 images:(id)arg4 actions:(id)arg5 contentParameters:(id)arg6 identifier:(id)arg7 ;
-(id)initWithICMessageContent:(id)arg1 ;
@end

