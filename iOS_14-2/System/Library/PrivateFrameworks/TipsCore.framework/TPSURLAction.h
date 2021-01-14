/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface TPSURLAction : NSObject <NSCopying, NSSecureCoding> {

	NSString* _text;
	NSURL* _URL;

}

@property (nonatomic,retain) NSString * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSURL * URL;                  //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(void)setURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setText:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)text;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

