/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <HelpKit/HelpKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HLPHelpTopicHistoryItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _anchor;
	CGPoint _contentOffset;
	CGSize _contentSize;

}

@property (assign,nonatomic) CGPoint contentOffset;              //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                 //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * anchor;                  //@synthesize anchor=_anchor - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)contentSize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)anchor;
-(NSString *)identifier;
-(CGPoint)contentOffset;
-(void)setAnchor:(NSString *)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

