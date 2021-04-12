/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSAttributedString, NSArray, NSDictionary;

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _userInfo;

}

@property (nonatomic,copy) NSAttributedString * attributedTitle; 
@property (nonatomic,copy) NSAttributedString * attributedContentText; 
@property (nonatomic,copy) NSArray * attachments; 
@property (nonatomic,copy) NSDictionary * userInfo; 
+(BOOL)supportsSecureCoding;
-(NSAttributedString *)attributedTitle;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSDictionary *)userInfo;
-(NSArray *)attachments;
-(id)init;
-(id)_matchingDictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setAttributedContentText:(NSAttributedString *)arg1 ;
-(id)description;
-(NSAttributedString *)attributedContentText;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

