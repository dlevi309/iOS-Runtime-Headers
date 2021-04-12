/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class HDFHIRResourceDocument, NSNumber;

@interface HDFHIRResourceExtractionBatch : NSObject {

	HDFHIRResourceDocument* _document;
	NSNumber* _rulesVersion;
	NSNumber* _highestRowID;

}

@property (nonatomic,readonly) HDFHIRResourceDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rulesVersion;                   //@synthesize rulesVersion=_rulesVersion - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * highestRowID;                   //@synthesize highestRowID=_highestRowID - In the implementation block
-(id)init;
-(HDFHIRResourceDocument *)document;
-(NSNumber *)rulesVersion;
-(id)initWithDocument:(id)arg1 rulesVersion:(id)arg2 highestRowID:(id)arg3 ;
-(id)initWithDocument:(id)arg1 rulesVersion:(id)arg2 ;
-(NSNumber *)highestRowID;
@end

