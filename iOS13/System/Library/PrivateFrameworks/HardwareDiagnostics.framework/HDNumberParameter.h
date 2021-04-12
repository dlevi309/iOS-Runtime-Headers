/*
* Generated on Monday, March 1, 2021 at 2:34:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/HDParameterDescription.h>

@class NSString;

@interface HDNumberParameter : NSObject <HDParameterDescription> {

	BOOL _required;
	NSString* _summary;

}

@property (nonatomic,retain) NSString * summary;                    //@synthesize summary=_summary - In the implementation block
@property (assign,nonatomic) BOOL required;                         //@synthesize required=_required - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)validateValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)required;
-(void)setRequired:(BOOL)arg1 ;
-(NSString *)summary;
-(void)setSummary:(NSString *)arg1 ;
-(id)initWithSummary:(id)arg1 required:(BOOL)arg2 ;
@end

