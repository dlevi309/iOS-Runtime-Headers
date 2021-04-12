/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@protocol NSStreamDelegate;
@class NSString, NSMutableArray, NSData;

@interface PKMultipartInputStream : NSInputStream {

	id<NSStreamDelegate> delegate;
	NSString* _boundary;
	unsigned long long _length;
	NSMutableArray* _parts;
	NSData* _footer;
	unsigned long long _currentPart;
	unsigned long long _delivered;
	unsigned long long _status;

}

@property (nonatomic,retain) NSMutableArray * parts;                      //@synthesize parts=_parts - In the implementation block
@property (nonatomic,retain) NSString * boundary;                         //@synthesize boundary=_boundary - In the implementation block
@property (nonatomic,retain) NSData * footer;                             //@synthesize footer=_footer - In the implementation block
@property (assign,nonatomic) unsigned long long currentPart;              //@synthesize currentPart=_currentPart - In the implementation block
@property (assign,nonatomic) unsigned long long delivered;                //@synthesize delivered=_delivered - In the implementation block
@property (assign,nonatomic) unsigned long long length;                   //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) unsigned long long status;                   //@synthesize status=_status - In the implementation block
-(id)init;
-(unsigned long long)length;
-(void)setLength:(unsigned long long)arg1 ;
-(void)open;
-(void)close;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)streamStatus;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)hasBytesAvailable;
-(void)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_PK4*)arg3 ;
-(void)_scheduleInCFRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(NSData *)footer;
-(void)setFooter:(NSData *)arg1 ;
-(unsigned long long)currentPart;
-(void)setDelivered:(unsigned long long)arg1 ;
-(NSString *)boundary;
-(NSMutableArray *)parts;
-(void)setParts:(NSMutableArray *)arg1 ;
-(void)updateLength;
-(unsigned long long)delivered;
-(void)addPartWithName:(id)arg1 string:(id)arg2 ;
-(void)addPartWithName:(id)arg1 data:(id)arg2 ;
-(void)addPartWithName:(id)arg1 data:(id)arg2 contentType:(id)arg3 ;
-(void)addPartWithName:(id)arg1 filename:(id)arg2 data:(id)arg3 contentType:(id)arg4 ;
-(void)addPartWithName:(id)arg1 path:(id)arg2 ;
-(void)addPartWithName:(id)arg1 filename:(id)arg2 path:(id)arg3 ;
-(void)addPartWithName:(id)arg1 filename:(id)arg2 path:(id)arg3 contentType:(id)arg4 ;
-(void)addPartWithName:(id)arg1 filename:(id)arg2 stream:(id)arg3 streamLength:(unsigned long long)arg4 ;
-(void)addPartWithHeaders:(id)arg1 string:(id)arg2 ;
-(void)addPartWithHeaders:(id)arg1 path:(id)arg2 ;
-(void)setBoundary:(NSString *)arg1 ;
-(void)setCurrentPart:(unsigned long long)arg1 ;
@end

