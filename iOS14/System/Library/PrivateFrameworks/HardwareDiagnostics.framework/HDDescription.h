/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface HDDescription : NSObject <NSCopying> {

	NSMutableDictionary* _parameters;
	NSString* _summary;
	NSDictionary* _metadata;

}

@property (nonatomic,copy) NSString * summary;                         //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters; 
+(id)descriptionWithSummary:(id)arg1 ;
-(NSDictionary *)parameters;
-(id)init;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(NSDictionary *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSummary:(id)arg1 ;
-(void)addParameter:(id)arg1 forName:(id)arg2 ;
-(BOOL)validateAgainstValues:(id)arg1 error:(id*)arg2 ;
@end

