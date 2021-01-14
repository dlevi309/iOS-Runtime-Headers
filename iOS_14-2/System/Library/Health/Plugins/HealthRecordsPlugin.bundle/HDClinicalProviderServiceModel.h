/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface HDClinicalProviderServiceModel : NSObject <NSCopying> {

	NSDictionary* _content;

}

@property (nonatomic,copy,readonly) NSDictionary * content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) long long revision; 
+(void)initialize;
+(id)schemaName;
+(BOOL)validateContent:(id)arg1 error:(out id*)arg2 ;
-(NSDictionary *)content;
-(id)init;
-(unsigned long long)hash;
-(id)initWithContent:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)revision;
-(id)_initWithoutValidatingContent:(id)arg1 ;
-(id)initWithoutValidatingContent:(id)arg1 ;
-(id)createRawContentWithError:(out id*)arg1 ;
@end

