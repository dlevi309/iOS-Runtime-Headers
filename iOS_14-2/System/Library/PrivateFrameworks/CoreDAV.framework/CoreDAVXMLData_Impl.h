/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/


#import <CoreDAV/CoreDAV-Structs.h>
@interface CoreDAVXMLData_Impl : NSObject {

	xmlTextWriterRef _writer;
	xmlDoc* _doc;

}

@property (assign) xmlTextWriterRef writer;              //@synthesize writer=_writer - In the implementation block
@property (assign) xmlDoc* doc;                          //@synthesize doc=_doc - In the implementation block
-(xmlDoc*)doc;
-(xmlTextWriterRef)writer;
-(void)setDoc:(xmlDoc*)arg1 ;
-(void)setWriter:(xmlTextWriterRef)arg1 ;
@end

