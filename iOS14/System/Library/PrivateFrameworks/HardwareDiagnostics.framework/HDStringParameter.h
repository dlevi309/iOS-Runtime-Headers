/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/HDParameterDescription.h>

@class NSString;

@interface HDStringParameter : NSObject <HDParameterDescription> {

	BOOL _required;
	NSString* _summary;

}

@property (nonatomic,retain) NSString * summary;                    //@synthesize summary=_summary - In the implementation block
@property (assign,nonatomic) BOOL required;                         //@synthesize required=_required - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRequired:(BOOL)arg1 ;
-(id)init;
-(NSString *)summary;
-(BOOL)validateValue:(id)arg1 error:(id*)arg2 ;
-(void)setSummary:(NSString *)arg1 ;
-(BOOL)required;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSummary:(id)arg1 required:(BOOL)arg2 ;
@end

