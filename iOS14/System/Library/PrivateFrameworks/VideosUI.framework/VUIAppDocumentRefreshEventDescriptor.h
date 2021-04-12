/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIAppDocumentUpdateEventDescriptor.h>

@class NSString;

@interface VUIAppDocumentRefreshEventDescriptor : VUIAppDocumentUpdateEventDescriptor {

	unsigned long long _delayInSeconds;
	NSString* _name;

}

@property (assign,nonatomic) unsigned long long delayInSeconds;              //@synthesize delayInSeconds=_delayInSeconds - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
-(id)initWithEventType:(unsigned long long)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)delayInSeconds;
-(id)initWithEventType:(unsigned long long)arg1 delayInSeconds:(unsigned long long)arg2 name:(id)arg3 ;
-(void)setDelayInSeconds:(unsigned long long)arg1 ;
@end

