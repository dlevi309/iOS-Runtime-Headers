/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)revision;
-(NSDictionary *)content;
-(id)initWithContent:(id)arg1 ;
-(id)_initWithoutValidatingContent:(id)arg1 ;
-(id)initWithoutValidatingContent:(id)arg1 ;
-(id)createRawContentWithError:(out id*)arg1 ;
@end

