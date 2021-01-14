/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@class NSNumber, NSString, NSDate;

@interface ATXAppDirectoryEvent : NSObject <NSSecureCoding, ATXProtoBufWrapper> {

	double _absoluteDate;
	unsigned long long _eventType;
	NSNumber* _categoryID;
	NSNumber* _categoryIndex;
	NSString* _bundleId;
	NSNumber* _bundleIndex;
	NSNumber* _searchQueryLength;
	NSNumber* _searchTab;

}

@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) unsigned long long eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,retain) NSNumber * categoryID;                     //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,retain) NSNumber * categoryIndex;                  //@synthesize categoryIndex=_categoryIndex - In the implementation block
@property (nonatomic,retain) NSString * bundleId;                       //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,retain) NSNumber * bundleIndex;                    //@synthesize bundleIndex=_bundleIndex - In the implementation block
@property (nonatomic,retain) NSNumber * searchQueryLength;              //@synthesize searchQueryLength=_searchQueryLength - In the implementation block
@property (nonatomic,retain) NSNumber * searchTab;                      //@synthesize searchTab=_searchTab - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)appDirectoryEventWithEventType:(unsigned long long)arg1 metadata:(id)arg2 ;
+(id)_objectForKey:(id)arg1 classType:(Class)arg2 fromMetadata:(id)arg3 ;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(void)setEventType:(unsigned long long)arg1 ;
-(unsigned long long)eventType;
-(id)proto;
-(id)init;
-(id)encodeAsProto;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(void)setCategoryIndex:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setCategoryID:(NSNumber *)arg1 ;
-(NSNumber *)categoryIndex;
-(NSNumber *)categoryID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)bundleIndex;
-(NSNumber *)searchQueryLength;
-(NSNumber *)searchTab;
-(void)setBundleIndex:(NSNumber *)arg1 ;
-(void)setSearchQueryLength:(NSNumber *)arg1 ;
-(void)setSearchTab:(NSNumber *)arg1 ;
-(id)initWithDate:(id)arg1 eventType:(unsigned long long)arg2 categoryID:(id)arg3 categoryIndex:(id)arg4 bundleId:(id)arg5 bundleIndex:(id)arg6 searchQueryLength:(id)arg7 searchTab:(id)arg8 ;
-(id)initWithAbsoluteDate:(double)arg1 eventType:(unsigned long long)arg2 categoryID:(id)arg3 categoryIndex:(id)arg4 bundleId:(id)arg5 bundleIndex:(id)arg6 searchQueryLength:(id)arg7 searchTab:(id)arg8 ;
-(BOOL)isEqualToATXAppDirectoryEvent:(id)arg1 ;
@end

