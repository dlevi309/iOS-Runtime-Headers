/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class BRCChecksummingOutputStream, NSData;

@interface BRCPackageChecksummer : NSObject {

	BRCChecksummingOutputStream* _stream;

}

@property (nonatomic,readonly) NSData * signature; 
-(NSData *)signature;
-(id)init;
-(void)done;
-(BOOL)addItem:(id)arg1 error:(id*)arg2 ;
@end

