/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/

#import <libobjc.A.dylib/BCDictionarySerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface BCAuthenticationLabels : NSObject <BCDictionarySerializable, NSSecureCoding> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _action;

}

@property (nonatomic,retain) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                           //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * action;                             //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)action;
-(NSString *)subtitle;
-(NSDictionary *)dictionaryValue;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 action:(id)arg3 ;
@end

