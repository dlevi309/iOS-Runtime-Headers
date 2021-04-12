/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTSOSMetric.h>

@class NSString;

@interface IDSSOSMetric : NSObject <CUTSOSMetric> {

	unsigned long long _sosDomain;
	unsigned long long _sosType;
	long long _sosError;
	NSString* _operationID;

}

@property (assign,nonatomic) unsigned long long sosDomain;              //@synthesize sosDomain=_sosDomain - In the implementation block
@property (assign,nonatomic) unsigned long long sosType;                //@synthesize sosType=_sosType - In the implementation block
@property (assign,nonatomic) long long sosError;                        //@synthesize sosError=_sosError - In the implementation block
@property (nonatomic,retain) NSString * operationID;                    //@synthesize operationID=_operationID - In the implementation block
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metricWithDomain:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(long long)arg3 bagURL:(id)arg4 ;
-(unsigned long long)sosType;
-(NSString *)operationID;
-(void)setOperationID:(NSString *)arg1 ;
-(long long)sosError;
-(NSString *)name;
-(void)setSosError:(long long)arg1 ;
-(void)setSosDomain:(unsigned long long)arg1 ;
-(void)setSosType:(unsigned long long)arg1 ;
-(id)initWithDomain:(unsigned long long)arg1 type:(unsigned long long)arg2 error:(long long)arg3 bagURL:(id)arg4 ;
-(unsigned long long)sosDomain;
@end

