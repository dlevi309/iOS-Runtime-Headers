/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/

#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, NSDate, NSData, NSDictionary;

@interface AXSSPunctuationEntry : NSObject <NSCopying> {

	NSUUID* _uuid;
	NSUUID* _groupUUID;
	BOOL _inCloud;
	unsigned short _version;
	NSString* _punctuation;
	NSString* _replacement;
	long long _rule;
	NSString* _ckChangeTag;
	NSDate* _lastModifiedDate;
	NSDate* _ckRecordProcessDate;

}

@property (nonatomic,retain) NSString * punctuation;                       //@synthesize punctuation=_punctuation - In the implementation block
@property (nonatomic,retain) NSString * replacement;                       //@synthesize replacement=_replacement - In the implementation block
@property (assign,nonatomic) long long rule;                               //@synthesize rule=_rule - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSUUID * groupUUID;                           //@synthesize groupUUID=_groupUUID - In the implementation block
@property (assign,nonatomic) unsigned short version;                       //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL inCloud;                                 //@synthesize inCloud=_inCloud - In the implementation block
@property (nonatomic,retain) NSString * ckChangeTag;                       //@synthesize ckChangeTag=_ckChangeTag - In the implementation block
@property (nonatomic,retain) NSDate * lastModifiedDate;                    //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,retain) NSDate * ckRecordProcessDate;                 //@synthesize ckRecordProcessDate=_ckRecordProcessDate - In the implementation block
@property (nonatomic,readonly) NSData * jsonRepresentation; 
@property (nonatomic,readonly) NSDictionary * jsonDictionary; 
+(id)punctuationEntryFromJSONDictionary:(id)arg1 ;
+(id)punctuationEntryFromJSONRepresentation:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGroupUUID:(NSUUID *)arg1 ;
-(unsigned short)version;
-(void)setVersion:(unsigned short)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)replacement;
-(void)setReplacement:(NSString *)arg1 ;
-(NSDate *)lastModifiedDate;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSUUID *)groupUUID;
-(long long)rule;
-(NSDictionary *)jsonDictionary;
-(NSData *)jsonRepresentation;
-(void)setRule:(long long)arg1 ;
-(void)setInCloud:(BOOL)arg1 ;
-(BOOL)inCloud;
-(void)setCkChangeTag:(NSString *)arg1 ;
-(void)setCkRecordProcessDate:(NSDate *)arg1 ;
-(NSString *)ckChangeTag;
-(NSDate *)ckRecordProcessDate;
-(NSString *)punctuation;
-(void)setPunctuation:(NSString *)arg1 ;
@end

