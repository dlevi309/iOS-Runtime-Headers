/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)attachments;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(void)setAttributedContentText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedContentText;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)_matchingDictionaryRepresentation;
@end

