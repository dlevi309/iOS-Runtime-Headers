/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/


@class NSString;

@interface CLKUIAtlas : NSObject {

	Ai _instanceCount;
	NSString* _uuid;
	unsigned long long _status;
	unsigned long long _width;
	unsigned long long _height;
	double _boundTime;
	unsigned long long _memoryCost;

}

@property (assign,nonatomic) unsigned long long status;                  //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) long long instanceCount; 
@property (nonatomic,readonly) NSString * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) unsigned long long width;                 //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) double boundTime;                           //@synthesize boundTime=_boundTime - In the implementation block
@property (assign,nonatomic) unsigned long long memoryCost;              //@synthesize memoryCost=_memoryCost - In the implementation block
@property (readonly) BOOL isPurgable; 
-(NSString *)uuid;
-(unsigned long long)width;
-(long long)instanceCount;
-(unsigned long long)height;
-(id)backing;
-(void)setStatus:(unsigned long long)arg1 ;
-(unsigned long long)status;
-(BOOL)isPurgable;
-(double)boundTime;
-(unsigned long long)memoryCost;
-(id)initWithUuid:(id)arg1 ;
-(void)incrementInstanceCount;
-(void)decrementInstanceCount;
-(void)setBoundTime:(double)arg1 ;
-(void)setMemoryCost:(unsigned long long)arg1 ;
@end

