/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WiFiPolicy-Structs.h>
#import <libobjc.A.dylib/TBTileRequestItem.h>

@class NSNumber, NSString;

@interface TBTileItemDescriptor : NSObject <TBTileRequestItem> {

	NSString* _etag;
	NSNumber* _key;

}

@property (nonatomic,retain) NSNumber * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * etag;                         //@synthesize etag=_etag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tileItemDescriptorWithKey:(id)arg1 ;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(NSNumber *)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSNumber *)arg1 ;
-(id)initWithKey:(id)arg1 etag:(id)arg2 ;
@end

