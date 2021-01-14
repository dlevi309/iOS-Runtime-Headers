/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ANMessage.h>

@class NSData, NSDictionary, NSString;

@interface ANAnnouncementDataItem : NSObject <NSSecureCoding, ANMessage> {

	unsigned long long _type;
	NSData* _data;
	unsigned long long _flags;

}

@property (assign,nonatomic) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSDictionary * info; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)message;
-(NSDictionary *)info;
-(id)init;
-(unsigned long long)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSString *)description;
-(id)initWithMessage:(id)arg1 ;
-(id)copy;
-(NSData *)data;
-(unsigned long long)type;
-(void)setFlags:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)_stringForDataType:(unsigned long long)arg1 ;
-(BOOL)processAudioWithEffects:(unsigned long long)arg1 error:(id*)arg2 ;
@end

