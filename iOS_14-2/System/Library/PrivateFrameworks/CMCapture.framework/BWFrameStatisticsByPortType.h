/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface BWFrameStatisticsByPortType : NSObject <NSFastEnumeration, NSSecureCoding> {

	NSArray* _portTypes;
	NSDictionary* _portTypeToFrameStatistics;
	SCD_Struct_BW121* _frameStatisticsStoragesForPortTypes;
	unsigned long long _frameCount;

}

@property (nonatomic,readonly) NSArray * portTypes; 
@property (nonatomic,readonly) unsigned long long frameCount; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(unsigned long long)frameCount;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSArray *)portTypes;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW116*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)_setFrameCount:(unsigned long long)arg1 ;
-(void)updateWithFrameMetadata:(id)arg1 updateFocusDistance:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPortTypes:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)reset;
-(id)initWithCoder:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

