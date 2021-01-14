/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFTitleSubtitleTuple.h>
@class NSString, NSDictionary, NSData;


@protocol SFTitleSubtitleTuple <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)subtitle;
-(NSData *)jsonData;
-(void)setTitle:(id)arg1;
-(void)setSubtitle:(id)arg1;
-(NSString *)title;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSData;

@interface SFTitleSubtitleTuple : NSObject <SFTitleSubtitleTuple, NSSecureCoding, NSCopying> {

	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)subtitle;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
@end

