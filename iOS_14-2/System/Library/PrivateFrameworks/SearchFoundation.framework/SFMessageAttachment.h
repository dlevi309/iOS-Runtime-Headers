/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFMessageAttachment.h>
@class NSURL, NSDictionary, NSData;


@protocol SFMessageAttachment <NSObject>
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSURL * url; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)setType:(int)arg1;
-(NSURL *)url;
-(void)setUrl:(id)arg1;
-(int)type;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary, NSData, NSString;

@interface SFMessageAttachment : NSObject <SFMessageAttachment, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _type;
	NSURL* _url;

}

@property (assign,nonatomic) int type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * url;                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasType;
-(void)setType:(int)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(int)type;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

